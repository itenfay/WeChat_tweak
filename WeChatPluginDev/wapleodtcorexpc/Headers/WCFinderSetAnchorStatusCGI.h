//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveAnchorStatusItem, NSString, WCFinderDataItem;

@interface WCFinderSetAnchorStatusCGI
{
    _Bool _onStartLive;
    unsigned int _liveStatus;
    id _extraInfo;
    WCFinderDataItem *_dataItem;
    MMFinderLiveAnchorStatusItem *_anchorStatus;
    unsigned long long _anchorStatusOpFlag;
    unsigned long long _anchorSettingOpFlag;
    NSString *_makeupsModelType;
    NSString *_detailSetList;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSString *detailSetList; // @synthesize detailSetList=_detailSetList;
@property(retain, nonatomic) NSString *makeupsModelType; // @synthesize makeupsModelType=_makeupsModelType;
@property(nonatomic) _Bool onStartLive; // @synthesize onStartLive=_onStartLive;
@property(nonatomic) unsigned long long anchorSettingOpFlag; // @synthesize anchorSettingOpFlag=_anchorSettingOpFlag;
@property(nonatomic) unsigned long long anchorStatusOpFlag; // @synthesize anchorStatusOpFlag=_anchorStatusOpFlag;
@property(nonatomic) unsigned int liveStatus; // @synthesize liveStatus=_liveStatus;
@property(retain, nonatomic) MMFinderLiveAnchorStatusItem *anchorStatus; // @synthesize anchorStatus=_anchorStatus;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) id extraInfo; // @synthesize extraInfo=_extraInfo;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithDataItem:(id)arg1 anchorStatus:(id)arg2 liveStatus:(unsigned int)arg3 anchorStatusOpFlag:(unsigned long long)arg4 anchorSettingOpFlag:(unsigned long long)arg5 onStartLive:(_Bool)arg6 successBlock:(CDUnknownBlockType)arg7 failBlock:(CDUnknownBlockType)arg8;

@end

