//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView;

@interface MMLiveMorphTransitionParameters : NSObject
{
    UIView *_primaryView;
    struct CGSize _mediaSize;
    struct CGRect _sourceFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize mediaSize; // @synthesize mediaSize=_mediaSize;
@property(retain, nonatomic) UIView *primaryView; // @synthesize primaryView=_primaryView;
@property(nonatomic) struct CGRect sourceFrame; // @synthesize sourceFrame=_sourceFrame;

@end

