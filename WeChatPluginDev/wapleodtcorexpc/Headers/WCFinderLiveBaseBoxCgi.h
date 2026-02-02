//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface WCFinderLiveBaseBoxCgi
{
    NSMutableArray *_boxIdList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *boxIdList; // @synthesize boxIdList=_boxIdList;
- (void)addBoxId:(id)arg1;
- (void)addBoxIdArr:(id)arg1;
- (_Bool)hasChatRoomBox;
- (void)setRequest:(id)arg1;

@end

