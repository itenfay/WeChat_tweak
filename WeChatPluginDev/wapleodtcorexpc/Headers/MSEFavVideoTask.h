//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MSEFavVideoTask : NSObject
{
    unsigned int _videoLen;
    NSString *_videoUrlStr;
}

+ (void)initialize;
+ (void)PBArrayAdd_videoLen;
+ (void)PBArrayAdd_videoUrlStr;
- (void).cxx_destruct;
@property(nonatomic) unsigned int videoLen; // @synthesize videoLen=_videoLen;
@property(retain, nonatomic) NSString *videoUrlStr; // @synthesize videoUrlStr=_videoUrlStr;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

