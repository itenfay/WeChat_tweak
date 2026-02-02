//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, ShakePayItem, ShakeProductItem, ShakeUrlItem, ShakeUserItem;

@interface ShakeTvActionItem : NSObject
{
    int _actionType;
    NSString *_commentId;
    NSString *_title;
    NSString *_url;
    NSString *_summary;
    NSMutableArray *_thumbUrls;
    ShakeUserItem *_userItem;
    ShakePayItem *_payItem;
    ShakeProductItem *_productItem;
    ShakeUrlItem *_urlItem;
}

+ (void)initialize;
+ (void)PBArrayAdd_urlItem;
+ (void)PBArrayAdd_productItem;
+ (void)PBArrayAdd_payItem;
+ (void)PBArrayAdd_userItem;
+ (void)PBArrayAdd_thumbUrls;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_summary;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_commentId;
+ (void)PBArrayAdd_actionType;
- (void).cxx_destruct;
@property(retain, nonatomic) ShakeUrlItem *urlItem; // @synthesize urlItem=_urlItem;
@property(retain, nonatomic) ShakeProductItem *productItem; // @synthesize productItem=_productItem;
@property(retain, nonatomic) ShakePayItem *payItem; // @synthesize payItem=_payItem;
@property(retain, nonatomic) ShakeUserItem *userItem; // @synthesize userItem=_userItem;
@property(retain, nonatomic) NSMutableArray *thumbUrls; // @synthesize thumbUrls=_thumbUrls;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
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

