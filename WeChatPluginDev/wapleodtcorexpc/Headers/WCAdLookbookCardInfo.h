//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCAdCardBtnInfo, WCAdLookbookBrandNewItem, WCAdPagInfo;

@interface WCAdLookbookCardInfo : NSObject
{
    _Bool _hideItemTitle;
    NSArray *_lookbookCardList;
    NSString *_slideTitle;
    NSString *_slideJumpTitle;
    WCAdCardBtnInfo *_slideActionInfo;
    WCAdPagInfo *_themePagInfo;
    WCAdPagInfo *_slidePagInfo;
    double _themeAnimDelay;
    NSString *_charmImageUrl;
    WCAdLookbookBrandNewItem *_brandNewItemInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdLookbookBrandNewItem *brandNewItemInfo; // @synthesize brandNewItemInfo=_brandNewItemInfo;
@property(nonatomic) _Bool hideItemTitle; // @synthesize hideItemTitle=_hideItemTitle;
@property(retain, nonatomic) NSString *charmImageUrl; // @synthesize charmImageUrl=_charmImageUrl;
@property(nonatomic) double themeAnimDelay; // @synthesize themeAnimDelay=_themeAnimDelay;
@property(retain, nonatomic) WCAdPagInfo *slidePagInfo; // @synthesize slidePagInfo=_slidePagInfo;
@property(retain, nonatomic) WCAdPagInfo *themePagInfo; // @synthesize themePagInfo=_themePagInfo;
@property(retain, nonatomic) WCAdCardBtnInfo *slideActionInfo; // @synthesize slideActionInfo=_slideActionInfo;
@property(retain, nonatomic) NSString *slideJumpTitle; // @synthesize slideJumpTitle=_slideJumpTitle;
@property(retain, nonatomic) NSString *slideTitle; // @synthesize slideTitle=_slideTitle;
@property(retain, nonatomic) NSArray *lookbookCardList; // @synthesize lookbookCardList=_lookbookCardList;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

