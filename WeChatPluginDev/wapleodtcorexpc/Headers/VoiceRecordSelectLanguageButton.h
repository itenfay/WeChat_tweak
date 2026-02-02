//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView;

@interface VoiceRecordSelectLanguageButton
{
    unsigned int _type;
    NSString *_name;
    UIView *_separatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)layoutSubviews;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

