//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedArray, WCFinderMemberShipIntroduceListData;

@interface WCFinderProfileMemberShipVideoData : NSObject
{
    WCFinderFeedArray *_feedArray;
    WCFinderMemberShipIntroduceListData *_listData;
    NSString *_memberShipTicket;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *memberShipTicket; // @synthesize memberShipTicket=_memberShipTicket;
@property(retain, nonatomic) WCFinderMemberShipIntroduceListData *listData; // @synthesize listData=_listData;
@property(retain, nonatomic) WCFinderFeedArray *feedArray; // @synthesize feedArray=_feedArray;

@end

