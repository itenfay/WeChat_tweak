//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableString, UIView;

@interface WCFinderRedDotRenderResultModel : NSObject
{
    _Bool _overWidth;
    unsigned long long _textLineNumber;
    unsigned long long _renderType;
    double _exceedWidth;
    NSMutableString *_reddotShowContent;
    UIView *_redDotRenderView;
    unsigned long long _remakeFlag;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long remakeFlag; // @synthesize remakeFlag=_remakeFlag;
@property(nonatomic) __weak UIView *redDotRenderView; // @synthesize redDotRenderView=_redDotRenderView;
@property(retain, nonatomic) NSMutableString *reddotShowContent; // @synthesize reddotShowContent=_reddotShowContent;
@property(nonatomic) double exceedWidth; // @synthesize exceedWidth=_exceedWidth;
@property(nonatomic) _Bool overWidth; // @synthesize overWidth=_overWidth;
@property(nonatomic) unsigned long long renderType; // @synthesize renderType=_renderType;
@property(nonatomic) unsigned long long textLineNumber; // @synthesize textLineNumber=_textLineNumber;
- (id)mutableCopy;
- (id)yy_modelDeepCopyWithConfigTag:(id)arg1;
- (id)init;

@end

