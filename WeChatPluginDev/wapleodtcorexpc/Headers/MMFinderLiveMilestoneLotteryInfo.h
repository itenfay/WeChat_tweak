//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveMilestoneLotteryInfo : NSObject
{
    unsigned int _beginTime;
    NSString *_prizeWording;
    NSString *_attendWording;
    NSString *_lotteryId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lotteryId; // @synthesize lotteryId=_lotteryId;
@property(nonatomic) unsigned int beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) NSString *attendWording; // @synthesize attendWording=_attendWording;
@property(retain, nonatomic) NSString *prizeWording; // @synthesize prizeWording=_prizeWording;
- (id)description;
- (id)initWithLotteryInfo:(id)arg1;

@end

