import java.io.*;
import java.util.*;

class FileManager {
    public static BufferedReader OpenFile(String fileToOpen) throws IOException {

        FileReader fileReader = new FileReader(fileToOpen);
        BufferedReader bufferedReader = new BufferedReader(fileReader);
        return bufferedReader;
    }

    void CloseFile (BufferedReader bufferedReader) {

//        bufferedReader.close();
    }
}
