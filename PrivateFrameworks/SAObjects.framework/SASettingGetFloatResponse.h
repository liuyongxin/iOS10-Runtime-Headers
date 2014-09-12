/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SASettingEntity;

@interface SASettingGetFloatResponse : SASettingGetNumberResponse  {
}

@property(retain) SASettingEntity * setting;

+ (id)getFloatResponseWithSetting:(id)arg1;
+ (id)getFloatResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getFloatResponse;

- (id)setting;
- (void)setSetting:(id)arg1;
- (id)initWithSetting:(id)arg1;
- (id)encodedClassName;
- (id)groupIdentifier;

@end