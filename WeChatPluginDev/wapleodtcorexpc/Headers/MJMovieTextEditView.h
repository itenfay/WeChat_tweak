//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJMovieDeleteButton, MJMovieTextButton, NSString;
@protocol MJMovieTextEditViewDelegate;

@interface MJMovieTextEditView
{
    id <MJMovieTextEditViewDelegate> _delegate;
    unsigned long long _style;
    MJMovieTextButton *_textButton;
    MJMovieDeleteButton *_deleteButton;
    NSString *_placeholder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) MJMovieDeleteButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) MJMovieTextButton *textButton; // @synthesize textButton=_textButton;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <MJMovieTextEditViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleSelectDelete:(id)arg1;
- (void)handleSelectEditText:(id)arg1;
- (void)resetDisplayingText;
- (void)setDisplayingText:(id)arg1;
- (id)displayingText;
- (void)setupViews;
- (id)initWithStyle:(unsigned long long)arg1;

@end

