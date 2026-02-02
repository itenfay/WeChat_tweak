//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView, ZZSeparatorModel;

@interface ZZSeparatorChainModel : NSObject
{
    UIView *_view;
    ZZSeparatorModel *_separatorModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ZZSeparatorModel *separatorModel; // @synthesize separatorModel=_separatorModel;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (CDUnknownBlockType)borderWidth;
- (CDUnknownBlockType)endAt;
- (CDUnknownBlockType)length;
- (CDUnknownBlockType)beginAt;
- (CDUnknownBlockType)color;
- (CDUnknownBlockType)offset;
- (id)initWithView:(id)arg1 andPosition:(long long)arg2;

@end

