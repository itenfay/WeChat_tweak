//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BTLiveBarItemView, BrandFinderLiveInfo, CContact, NSString, UIColor;

@interface BTLiveBarItemViewModel : NSObject
{
    _Bool _hasClick;
    _Bool _isDefaultExpand;
    _Bool _isExposedInLiveBar;
    NSString *_nickName;
    BTLiveBarItemView *_itemView;
    CContact *_contact;
    BrandFinderLiveInfo *_liveInfo;
    UIColor *_cachedMainColor;
}

+ (id)itemViewClassName;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *cachedMainColor; // @synthesize cachedMainColor=_cachedMainColor;
@property(nonatomic) _Bool isExposedInLiveBar; // @synthesize isExposedInLiveBar=_isExposedInLiveBar;
@property(nonatomic) _Bool isDefaultExpand; // @synthesize isDefaultExpand=_isDefaultExpand;
@property(copy, nonatomic) BrandFinderLiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool hasClick; // @synthesize hasClick=_hasClick;
@property(nonatomic) __weak BTLiveBarItemView *itemView; // @synthesize itemView=_itemView;
@property(readonly, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
- (void)onModifyContact:(id)arg1;
- (void)saveMainColor:(id)arg1;
@property(readonly, nonatomic) NSString *liveCoverUrl;
@property(readonly, nonatomic) UIColor *mainColor;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *headImgUrl;
@property(readonly, nonatomic) NSString *username;
- (id)init;

@end

