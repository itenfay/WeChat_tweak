//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCPayAddressInfo;

@interface WCPayTransferMoneyData : NSObject
{
    unsigned int _desc_has_address;
    NSString *_receiverMaskTrueName;
    NSString *_truenameExtend;
    WCPayAddressInfo *_m_addressInfo;
    NSString *_m_addressRemark;
    NSString *_m_placeorderReserves;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int desc_has_address; // @synthesize desc_has_address=_desc_has_address;
@property(retain, nonatomic) NSString *m_placeorderReserves; // @synthesize m_placeorderReserves=_m_placeorderReserves;
@property(retain, nonatomic) NSString *m_addressRemark; // @synthesize m_addressRemark=_m_addressRemark;
@property(retain, nonatomic) WCPayAddressInfo *m_addressInfo; // @synthesize m_addressInfo=_m_addressInfo;
@property(copy, nonatomic) NSString *truenameExtend; // @synthesize truenameExtend=_truenameExtend;
@property(copy, nonatomic) NSString *receiverMaskTrueName; // @synthesize receiverMaskTrueName=_receiverMaskTrueName;

@end

