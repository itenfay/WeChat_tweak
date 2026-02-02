//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EmoticonTabRecommendItem : NSObject
{
    unsigned int _m_buttonType;
    NSString *_m_productId;
    NSString *_m_iconUrl;
    NSString *_m_bigIconUrl;
    NSString *_m_recType;
    NSString *_m_name;
    NSString *_m_recWord;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_buttonType;
+ (void)PBArrayAdd_m_recWord;
+ (void)PBArrayAdd_m_recType;
+ (void)PBArrayAdd_m_bigIconUrl;
+ (void)PBArrayAdd_m_iconUrl;
+ (void)PBArrayAdd_m_productId;
+ (void)PBArrayAdd_m_name;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_buttonType; // @synthesize m_buttonType=_m_buttonType;
@property(retain, nonatomic) NSString *m_recWord; // @synthesize m_recWord=_m_recWord;
@property(retain, nonatomic) NSString *m_name; // @synthesize m_name=_m_name;
@property(retain, nonatomic) NSString *m_recType; // @synthesize m_recType=_m_recType;
@property(retain, nonatomic) NSString *m_bigIconUrl; // @synthesize m_bigIconUrl=_m_bigIconUrl;
@property(retain, nonatomic) NSString *m_iconUrl; // @synthesize m_iconUrl=_m_iconUrl;
@property(retain, nonatomic) NSString *m_productId; // @synthesize m_productId=_m_productId;
@property(readonly, copy) NSString *description;
- (void)updateFromItem:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

