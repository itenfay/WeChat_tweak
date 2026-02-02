//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView, ZZCornerModel;

@interface ZZCornerChainModel : NSObject
{
    UIView *_view;
    ZZCornerModel *_cornerModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ZZCornerModel *cornerModel; // @synthesize cornerModel=_cornerModel;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (CDUnknownBlockType)borderWidth;
- (CDUnknownBlockType)color;
- (CDUnknownBlockType)radius;
- (id)initWithView:(id)arg1 andPosition:(long long)arg2;

@end

