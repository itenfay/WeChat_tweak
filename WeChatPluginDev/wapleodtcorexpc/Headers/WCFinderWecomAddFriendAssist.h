//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSString, WCFinderOpenIMInfo;

@interface WCFinderWecomAddFriendAssist : NSObject
{
    MMUIViewController *_vc;
    WCFinderOpenIMInfo *_info;
    NSString *_failTip;
}

+ (id)openOpenImContactInfo:(id)arg1 storeByVC:(id)arg2;
+ (id)openOpenImContactInfo:(id)arg1 storeByVC:(id)arg2 failTip:(id)arg3;
+ (id)openOpenImContactInfo:(id)arg1 openIMInfo:(id)arg2 storeByVC:(id)arg3 failTip:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *failTip; // @synthesize failTip=_failTip;
@property(retain, nonatomic) WCFinderOpenIMInfo *info; // @synthesize info=_info;
@property(nonatomic) __weak MMUIViewController *vc; // @synthesize vc=_vc;
- (void)removeFromDisposeBag;
- (void)onContactSearchLogicFail:(id)arg1;
- (void)onContactSearchLogicDone:(id)arg1 FromScene:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSearchOpenIMContactResp:(id)arg1;
- (void)startSearchCGI:(id)arg1 openIMInfo:(id)arg2;

@end

