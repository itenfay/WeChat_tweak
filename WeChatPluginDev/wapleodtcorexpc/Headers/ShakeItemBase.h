//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, ShakePayItem, ShakeProductItem, ShakeTempSessionItem, ShakeTvHistoryItem, ShakeTvItem, ShakeUrlItem, ShakeUserItem, ShakeWeAppItem;

@interface ShakeItemBase : NSObject
{
    int _itemType;
    unsigned int _createTime;
    ShakeTvHistoryItem *shakeTvHistoryItem;
    ShakeTvItem *_shakeTvItem;
    ShakeUrlItem *_shakeUrlItem;
    ShakeUserItem *_shakeUsrItem;
    ShakePayItem *_shakePayItem;
    ShakeProductItem *_shakeProductItem;
    ShakeTempSessionItem *_shakeTempSessionItem;
    ShakeWeAppItem *_shakeWeAppItem;
}

+ (id)getShakeItemFromXml:(id)arg1 andType:(int)arg2;
+ (id)parseXmlToShakeUser:(struct XmlReaderNode_t *)arg1;
+ (id)parseXmlToShakeUrl:(struct XmlReaderNode_t *)arg1;
+ (id)parseXmlToShakeProduct:(struct XmlReaderNode_t *)arg1;
+ (id)parseXmlToShakeWeAppItem:(struct XmlReaderNode_t *)arg1;
+ (id)parseXmlToTempSession:(struct XmlReaderNode_t *)arg1;
+ (id)parseXmlToShakeTvHistory:(struct XmlReaderNode_t *)arg1;
+ (id)parseXmlToShakePay:(struct XmlReaderNode_t *)arg1;
+ (void)parseXml:(struct XmlReaderNode_t *)arg1 toShakeAction:(id)arg2;
+ (void)initialize;
+ (void)PBArrayAdd_shakeWeAppItem;
+ (void)PBArrayAdd_shakeTempSessionItem;
+ (void)PBArrayAdd_shakeProductItem;
+ (void)PBArrayAdd_shakePayItem;
+ (void)PBArrayAdd_shakeUsrItem;
+ (void)PBArrayAdd_shakeUrlItem;
+ (void)PBArrayAdd_shakeTvItem;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_itemType;
- (void).cxx_destruct;
@property(retain, nonatomic) ShakeWeAppItem *shakeWeAppItem; // @synthesize shakeWeAppItem=_shakeWeAppItem;
@property(retain, nonatomic) ShakeTempSessionItem *shakeTempSessionItem; // @synthesize shakeTempSessionItem=_shakeTempSessionItem;
@property(retain, nonatomic) ShakeProductItem *shakeProductItem; // @synthesize shakeProductItem=_shakeProductItem;
@property(retain, nonatomic) ShakePayItem *shakePayItem; // @synthesize shakePayItem=_shakePayItem;
@property(retain, nonatomic) ShakeUserItem *shakeUsrItem; // @synthesize shakeUsrItem=_shakeUsrItem;
@property(retain, nonatomic) ShakeUrlItem *shakeUrlItem; // @synthesize shakeUrlItem=_shakeUrlItem;
@property(retain, nonatomic) ShakeTvItem *shakeTvItem; // @synthesize shakeTvItem=_shakeTvItem;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) int itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) ShakeTvHistoryItem *shakeTvHistoryItem; // @synthesize shakeTvHistoryItem;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

