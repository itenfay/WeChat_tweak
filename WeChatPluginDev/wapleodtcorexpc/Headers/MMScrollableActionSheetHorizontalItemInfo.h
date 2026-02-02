//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMScrollableActionSheetHorizontalItemView, NSString, UIImage;

@interface MMScrollableActionSheetHorizontalItemInfo
{
    unsigned int _itemType;
    UIImage *_iconImage;
    UIImage *_cornerImage;
    NSString *_iconUrl;
    NSString *_title;
    id _userInfo;
    MMScrollableActionSheetHorizontalItemView *_itemView;
    struct UIEdgeInsets _titleEdgeInsets;
    struct UIEdgeInsets _imageEdgeInsets;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMScrollableActionSheetHorizontalItemView *itemView; // @synthesize itemView=_itemView;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) struct UIEdgeInsets imageEdgeInsets; // @synthesize imageEdgeInsets=_imageEdgeInsets;
@property(nonatomic) struct UIEdgeInsets titleEdgeInsets; // @synthesize titleEdgeInsets=_titleEdgeInsets;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) UIImage *cornerImage; // @synthesize cornerImage=_cornerImage;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) unsigned int itemType; // @synthesize itemType=_itemType;

@end

