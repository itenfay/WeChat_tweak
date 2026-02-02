//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveCastViewItem : NSObject
{
    _Bool _isLoading;
    _Bool _showsTopSeparatorLine;
    _Bool _showsBottomSeparatorLine;
    NSString *_title;
    CDUnknownBlockType _didSelectBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didSelectBlock; // @synthesize didSelectBlock=_didSelectBlock;
@property(nonatomic) _Bool showsBottomSeparatorLine; // @synthesize showsBottomSeparatorLine=_showsBottomSeparatorLine;
@property(nonatomic) _Bool showsTopSeparatorLine; // @synthesize showsTopSeparatorLine=_showsTopSeparatorLine;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)didSelect;

@end

