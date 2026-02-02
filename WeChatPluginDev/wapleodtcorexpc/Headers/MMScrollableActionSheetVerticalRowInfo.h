//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSAttributedString, NSString, UIImage;

@interface MMScrollableActionSheetVerticalRowInfo
{
    _Bool _isLoading;
    unsigned int _rowType;
    NSString *_webImageUrl;
    UIImage *_localImage;
    double _cornerRadius;
    NSString *_title;
    NSAttributedString *_attributedTitle;
    NSString *_subtitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIImage *localImage; // @synthesize localImage=_localImage;
@property(retain, nonatomic) NSString *webImageUrl; // @synthesize webImageUrl=_webImageUrl;
@property(nonatomic) unsigned int rowType; // @synthesize rowType=_rowType;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;

@end

