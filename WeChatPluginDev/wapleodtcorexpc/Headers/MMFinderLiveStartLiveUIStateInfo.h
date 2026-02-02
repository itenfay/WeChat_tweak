//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveQuestEntranceInfo, FinderLiveQuickReplyWordingInfo, NSMutableArray, NSString;

@interface MMFinderLiveStartLiveUIStateInfo : NSObject
{
    NSString *_bulletDescription;
    NSString *_bulletDdescriptionExtend;
    NSString *_bulletPlaceHolderString;
    FinderLiveQuestEntranceInfo *_questEntranceInfo;
    NSMutableArray *_questActivities;
    FinderLiveQuickReplyWordingInfo *_quickReplyWordingInfo;
    NSMutableArray *_lotteryArray;
    NSMutableArray *_lotteryAttendTypeList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *lotteryAttendTypeList; // @synthesize lotteryAttendTypeList=_lotteryAttendTypeList;
@property(retain, nonatomic) NSMutableArray *lotteryArray; // @synthesize lotteryArray=_lotteryArray;
@property(retain, nonatomic) FinderLiveQuickReplyWordingInfo *quickReplyWordingInfo; // @synthesize quickReplyWordingInfo=_quickReplyWordingInfo;
@property(retain, nonatomic) NSMutableArray *questActivities; // @synthesize questActivities=_questActivities;
@property(retain, nonatomic) FinderLiveQuestEntranceInfo *questEntranceInfo; // @synthesize questEntranceInfo=_questEntranceInfo;
@property(retain, nonatomic) NSString *bulletPlaceHolderString; // @synthesize bulletPlaceHolderString=_bulletPlaceHolderString;
@property(retain, nonatomic) NSString *bulletDdescriptionExtend; // @synthesize bulletDdescriptionExtend=_bulletDdescriptionExtend;
@property(retain, nonatomic) NSString *bulletDescription; // @synthesize bulletDescription=_bulletDescription;

@end

