//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCTimelineReceivedAdIdMgr
{
    NSMutableArray *_receivedAdList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *receivedAdList; // @synthesize receivedAdList=_receivedAdList;
- (_Bool)isAdReceived:(id)arg1;
- (void)deleteAdvertiseDateItemList:(id)arg1;
- (void)mergeReceivedAdList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

