//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveLotteryReqInfo : NSObject
{
    NSString *_attrcontent;
    NSString *_tip;
    NSString *_lotteryId;
    NSString *_objectId;
    NSString *_liveId;
    NSString *_isAudience;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *isAudience; // @synthesize isAudience=_isAudience;
@property(retain, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) NSString *lotteryId; // @synthesize lotteryId=_lotteryId;
@property(retain, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(retain, nonatomic) NSString *attrcontent; // @synthesize attrcontent=_attrcontent;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;

@end

