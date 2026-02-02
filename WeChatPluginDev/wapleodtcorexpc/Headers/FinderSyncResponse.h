//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CmdList, EntranceReportSwitch, FinderCheckExpireInfo, FinderObjectCtrl, FinderPopupClientFreqConfig, NSData, NSMutableArray, SKBuiltinBuffer_t;

@interface FinderSyncResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderCheckExpireInfo *checkExpireInfo; // @dynamic checkExpireInfo;
@property(retain, nonatomic) NSMutableArray *cmdList; // @dynamic cmdList;
@property(retain, nonatomic) CmdList *cmdListDiscarded; // @dynamic cmdListDiscarded;
@property(retain, nonatomic) NSMutableArray *contacts; // @dynamic contacts;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) EntranceReportSwitch *entranceExposeSwitch; // @dynamic entranceExposeSwitch;
@property(retain, nonatomic) SKBuiltinBuffer_t *keyBuf; // @dynamic keyBuf;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) FinderObjectCtrl *objectCtrl; // @dynamic objectCtrl;
@property(retain, nonatomic) FinderPopupClientFreqConfig *popupClientFreqConfig; // @dynamic popupClientFreqConfig;
@property(retain, nonatomic) NSMutableArray *reddotDiscardConfig; // @dynamic reddotDiscardConfig;
@property(retain, nonatomic) NSMutableArray *reddotFreqCtrl; // @dynamic reddotFreqCtrl;
@property(nonatomic) unsigned int roundRobinInterval; // @dynamic roundRobinInterval;
@property(retain, nonatomic) NSMutableArray *self_; // @dynamic self_;

@end

