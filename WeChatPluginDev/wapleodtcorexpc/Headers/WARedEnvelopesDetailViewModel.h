//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, RealNameInfo;

@interface WARedEnvelopesDetailViewModel : NSObject
{
    unsigned int _wxahbStatus;
    int _hbStatus;
    int _receiveStatus;
    unsigned int _rcvdNum;
    unsigned int _totalNum;
    int _hbType;
    int _isSender;
    unsigned long long _amount;
    unsigned long long _rcvdAmount;
    unsigned long long _totalAmount;
    NSMutableArray *_rcvdUserList;
    NSString *_wishing;
    NSString *_sendUsername;
    NSString *_sendNickname;
    NSString *_sendHeadimg;
    NSString *_headTitle;
    NSString *_amountTitle;
    RealNameInfo *_realNameInfo;
    NSString *_errorwording;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errorwording; // @synthesize errorwording=_errorwording;
@property(retain, nonatomic) RealNameInfo *realNameInfo; // @synthesize realNameInfo=_realNameInfo;
@property(retain, nonatomic) NSString *amountTitle; // @synthesize amountTitle=_amountTitle;
@property(retain, nonatomic) NSString *headTitle; // @synthesize headTitle=_headTitle;
@property(nonatomic) int isSender; // @synthesize isSender=_isSender;
@property(retain, nonatomic) NSString *sendHeadimg; // @synthesize sendHeadimg=_sendHeadimg;
@property(retain, nonatomic) NSString *sendNickname; // @synthesize sendNickname=_sendNickname;
@property(retain, nonatomic) NSString *sendUsername; // @synthesize sendUsername=_sendUsername;
@property(retain, nonatomic) NSString *wishing; // @synthesize wishing=_wishing;
@property(retain, nonatomic) NSMutableArray *rcvdUserList; // @synthesize rcvdUserList=_rcvdUserList;
@property(nonatomic) int hbType; // @synthesize hbType=_hbType;
@property(nonatomic) unsigned long long totalAmount; // @synthesize totalAmount=_totalAmount;
@property(nonatomic) unsigned int totalNum; // @synthesize totalNum=_totalNum;
@property(nonatomic) unsigned long long rcvdAmount; // @synthesize rcvdAmount=_rcvdAmount;
@property(nonatomic) unsigned int rcvdNum; // @synthesize rcvdNum=_rcvdNum;
@property(nonatomic) unsigned long long amount; // @synthesize amount=_amount;
@property(nonatomic) int receiveStatus; // @synthesize receiveStatus=_receiveStatus;
@property(nonatomic) int hbStatus; // @synthesize hbStatus=_hbStatus;
@property(nonatomic) unsigned int wxahbStatus; // @synthesize wxahbStatus=_wxahbStatus;
- (id)initWithDetailResponse:(id)arg1;
- (id)initWithOpenResponse:(id)arg1;

@end

