//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView;

@interface TingPlayerDisplayElement : NSObject
{
    UIView *_playerView;
    struct CGSize _viewSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;

@end

