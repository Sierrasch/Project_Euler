import java.io.*;
import java.util.*;

class NamesScores {
    public static void main(String[] args) {
        String inputFileName = "input.txt";
        BufferedReader bufferedReader;
        String input;

        //FileIO
        try {
            bufferedReader =  FileManager.OpenFile (inputFileName);
            input = bufferedReader.readLine();
            bufferedReader.close();

        } catch (IOException ex) {
            System.out.println ("Error Opening File.");
            ex.printStackTrace();
            return;
        }

        //Build name array
        String[] inputNames = input.split(",");
        for (int i = 0; i < inputNames.length; i++)
        {
            inputNames[i] = inputNames[i].replaceAll ("\"", "");
        }
        ArrayList<String> names = new ArrayList<> (Arrays.asList(inputNames));
        Collections.sort (names);

        //calculate name scores
        long scoreSum = 0;
        for (int i = 1; i < names.size() + 1; i++) {
            int nameScore = 0;
            String currentName = names.get (i - 1);
            for ( int j = 0; j < currentName.length(); j++){
                nameScore += currentName.charAt(j) - 64;
            }
            scoreSum += (nameScore * i);
        }

        //Print result
        System.out.println ("Names score sum: " + scoreSum);
    }
}