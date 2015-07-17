/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAAddFamilyMemberRequest : FAFamilyCircleRequest {
    NSString *_memberAppleID;
    BOOL _memberIsUnder13;
    NSString *_memberPassword;
}

@property (readonly, copy) NSString *memberAppleID;
@property (readonly) BOOL memberIsUnder13;
@property (readonly, copy) NSString *memberPassword;

- (void).cxx_destruct;
- (id)initWithFamilyMemberAppleID:(id)arg1 password:(id)arg2 isUnder13:(BOOL)arg3;
- (id)memberAppleID;
- (BOOL)memberIsUnder13;
- (id)memberPassword;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;

@end