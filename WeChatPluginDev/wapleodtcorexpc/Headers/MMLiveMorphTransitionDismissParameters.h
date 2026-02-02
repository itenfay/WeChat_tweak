//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;
@protocol MMLiveMorphDismissSource;

@interface MMLiveMorphTransitionDismissParameters
{
    UIView *_customSnapView;
    id <MMLiveMorphDismissSource> _sourceContext;
    struct CGRect _targetFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MMLiveMorphDismissSource> sourceContext; // @synthesize sourceContext=_sourceContext;
@property(retain, nonatomic) UIView *customSnapView; // @synthesize customSnapView=_customSnapView;
@property(nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;

@end

