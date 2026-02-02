//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIImageView;

@interface WALoadErrorViewController
{
    UIImageView *_errorLogo;
    MMUILabel *_titleLabel;
    NSString *m_errStr;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *m_errStr; // @synthesize m_errStr;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 errString:(id)arg2;

@end

