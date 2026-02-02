//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLivePromoteListBaseViewItem, NSString;

@interface WCFinderLiveAnchorModPromoteJumpInfoListCGI
{
    unsigned int _opType;
    unsigned int _type;
    NSString *_anchorFinderUsername;
    MMFinderLivePromoteListBaseViewItem *_item;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) MMFinderLivePromoteListBaseViewItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NSString *anchorFinderUsername; // @synthesize anchorFinderUsername=_anchorFinderUsername;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int opType; // @synthesize opType=_opType;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 type:(unsigned int)arg2 anchorFinderUsername:(id)arg3 opType:(unsigned int)arg4 item:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

