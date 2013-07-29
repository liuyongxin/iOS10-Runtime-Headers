/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardPreferencesController : NSObject  {
}

+ (id)sharedPreferencesController;
+ (void)handleSpecificHardwareKeyboard;

- (void)touchSynchronizePreferencesTimer;
- (void)synchronizePreferences;
- (void)releaseDontSynchronizePreferences;
- (id)init;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (void)dealloc;
- (BOOL)costlyCapture;
- (void)preferencesControllerChanged:(id)arg1;
- (BOOL)typologyEnabled;
- (BOOL)spaceConfirmationEnabled;
- (void)setInputModeLastUsed:(id)arg1;
- (void)saveInputModes:(id)arg1;
- (float)rivenSizeFactor:(float)arg1;
- (id)valueForKey:(int)arg1;
- (BOOL)boolForKey:(int)arg1;

@end