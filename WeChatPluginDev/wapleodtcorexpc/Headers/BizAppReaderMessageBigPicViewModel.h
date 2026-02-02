//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AppMessageBigPicViewStyle, NSArray, NSString;

@interface BizAppReaderMessageBigPicViewModel : NSObject
{
    _Bool _isLongPic;
    NSString *_title;
    unsigned long long _picCount;
    NSArray *_titleLabelStyles;
    NSString *_coverImageUrl;
    AppMessageBigPicViewStyle *_viewStyle;
    NSString *_sourceUsrname;
    NSString *_sourceNickname;
    struct CGSize _bigPicSize;
    struct CGSize _coverOriginSize;
    struct CGSize _titleSize;
    struct CGSize _contentSize;
}

+ (_Bool)isValidShareItem:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sourceNickname; // @synthesize sourceNickname=_sourceNickname;
@property(copy, nonatomic) NSString *sourceUsrname; // @synthesize sourceUsrname=_sourceUsrname;
@property(nonatomic) _Bool isLongPic; // @synthesize isLongPic=_isLongPic;
@property(retain, nonatomic) AppMessageBigPicViewStyle *viewStyle; // @synthesize viewStyle=_viewStyle;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, copy, nonatomic) NSString *coverImageUrl; // @synthesize coverImageUrl=_coverImageUrl;
@property(nonatomic) struct CGSize titleSize; // @synthesize titleSize=_titleSize;
@property(copy, nonatomic) NSArray *titleLabelStyles; // @synthesize titleLabelStyles=_titleLabelStyles;
@property(nonatomic) struct CGSize coverOriginSize; // @synthesize coverOriginSize=_coverOriginSize;
@property(nonatomic) unsigned long long picCount; // @synthesize picCount=_picCount;
@property(nonatomic) struct CGSize bigPicSize; // @synthesize bigPicSize=_bigPicSize;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)refreshLayout;
- (id)initWithShareItem:(id)arg1 title:(id)arg2 sourceUsrname:(id)arg3 sourceNickname:(id)arg4 viewStyle:(id)arg5;

@end

