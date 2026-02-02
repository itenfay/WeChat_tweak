//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMScrollStack;

@interface MMStackViewController
{
    MMScrollStack *_stackView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMScrollStack *stackView; // @synthesize stackView=_stackView;
- (void)initUIDebug;
- (void)initStackView;
- (void)viewDidLoad;

@end

