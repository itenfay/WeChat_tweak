//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableString, UIView;

@interface WCFinderRedDotRenderNodeModel : NSObject
{
    _Bool _renderRet;
    _Bool _isTruncated;
    double _exceedWidth;
    double _leftLine;
    unsigned long long _textLineNumber;
    UIView *_redDotRenderView;
    unsigned long long _remakeFlag;
    NSMutableString *_reddotShowContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableString *reddotShowContent; // @synthesize reddotShowContent=_reddotShowContent;
@property(nonatomic) unsigned long long remakeFlag; // @synthesize remakeFlag=_remakeFlag;
@property(nonatomic) __weak UIView *redDotRenderView; // @synthesize redDotRenderView=_redDotRenderView;
@property(nonatomic) unsigned long long textLineNumber; // @synthesize textLineNumber=_textLineNumber;
@property(nonatomic) _Bool isTruncated; // @synthesize isTruncated=_isTruncated;
@property(nonatomic) double leftLine; // @synthesize leftLine=_leftLine;
@property(nonatomic) double exceedWidth; // @synthesize exceedWidth=_exceedWidth;
@property(nonatomic) _Bool renderRet; // @synthesize renderRet=_renderRet;
- (id)mutableCopy;
- (id)yy_modelDeepCopyWithConfigTag:(id)arg1;
- (id)init;

@end

