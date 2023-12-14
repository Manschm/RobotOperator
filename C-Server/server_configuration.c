//package net.simon987.server;

//import net.simon987.server.logging.LogManager;
//import java.io.*;
//import java.util.Properties;

/**
 * Wrapper for Java Properties class
 */
//public class ServerConfiguration implements IServerConfiguration {
/* 
    IServerConfiguration is just the interface for this class implemented in "IServerConfiguration.java":
    ""
    package net.simon987.server;
    public interface IServerConfiguration {
        int getInt(String key);
        String getString(String key);
        void setInt(String key, int value);
        void setString(String key, String value);
    }
    ""
*/

    //TODO: Create server properties struct
    //private Properties properties;
    //private String fileName;

    /* TODO: Create server configuration
    public ServerConfiguration() {
        this.properties = new Properties();
    }
    */

   /* TODO: Read server configuration from file
    public ServerConfiguration(String fileName) {

        this.fileName = fileName;

        try {
            properties = new Properties();
            InputStream is = new FileInputStream(this.fileName);
            properties.load(is);

        } catch (IOException e) {
            LogManager.LOGGER.severe("Problem loading server configuration: " + e.getMessage());
        }
    }
    */

   /* TODO: Save server configuration to file
    private void saveConfig() {

        try {
            OutputStream os = new FileOutputStream(this.fileName);
            properties.store(os, "");

        } catch (IOException e) {
            LogManager.LOGGER.severe("Problem saving server configuration: " + e.getMessage());
        }
    }
    */

   /* TODO: Get integer from configuration using string as key
    public int getInt(String key) {
        return Integer.valueOf((String) properties.get(key));

    }
    */

   /* TODO: Get string from configuration using string as key
    public String getString(String key) {

        return (String) properties.get(key);
    }
    */

   /* TODO: Set integer in configuration using string as key
    public void setInt(String key, int value) {
        properties.setProperty(key, String.valueOf(value));
        saveConfig();
    }
    */

   /* TODO: Set string in configuration using string as key
    public void setString(String key, String value) {
        properties.setProperty(key, value);
        saveConfig();
    }
    */
