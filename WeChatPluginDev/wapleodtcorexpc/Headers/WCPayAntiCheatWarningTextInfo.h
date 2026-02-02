//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCPayAntiCheatWarningJumpInfo;

@interface WCPayAntiCheatWarningTextInfo : NSObject
{
    NSString *_wording;
    WCPayAntiCheatWarningJumpInfo *_jump_info;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayAntiCheatWarningJumpInfo *jump_info; // @synthesize jump_info=_jump_info;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;

@end

