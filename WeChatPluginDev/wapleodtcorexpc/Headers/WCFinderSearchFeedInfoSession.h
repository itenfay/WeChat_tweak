//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;

@interface WCFinderSearchFeedInfoSession : NSObject
{
    _Bool _continueFlag;
    NSMutableArray *_searchInfos;
    NSData *_lastBuff;
    NSString *_reqId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reqId; // @synthesize reqId=_reqId;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(retain, nonatomic) NSMutableArray *searchInfos; // @synthesize searchInfos=_searchInfos;
@property(readonly, nonatomic) _Bool isEmpty;

@end

