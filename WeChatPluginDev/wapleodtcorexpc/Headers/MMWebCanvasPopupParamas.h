//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMWebCanvasPopupParamas : NSObject
{
    unsigned int _mode;
    NSString *_canvasId;
    NSString *_maskHexColor;
    CDUnknownBlockType _closeBlock;
    NSString *_bizType;
    struct CGRect _canvasRect;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSString *maskHexColor; // @synthesize maskHexColor=_maskHexColor;
@property(nonatomic) struct CGRect canvasRect; // @synthesize canvasRect=_canvasRect;
@property(copy, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
- (id)description;

@end

