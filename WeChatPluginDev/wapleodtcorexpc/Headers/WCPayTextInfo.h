//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCPayJumpInfo;

@interface WCPayTextInfo : NSObject
{
    NSString *_wording;
    WCPayJumpInfo *_jump_info;
}

+ (id)genFromUnion:(id)arg1;
- (void).cxx_destruct;
@property(retain) WCPayJumpInfo *jump_info; // @synthesize jump_info=_jump_info;
@property(retain) NSString *wording; // @synthesize wording=_wording;

@end

