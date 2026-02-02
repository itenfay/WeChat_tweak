//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFloatMsg, NSString;

@interface MMFinderLiveQuickReplyBarrageModel
{
    _Bool _selected;
    id _payload;
    NSString *_leadingImagePath;
    NSString *_trailingPAGPath;
    MMFinderLiveFloatMsg *_floatMsg;
    CDUnknownBlockType _onSelectedDidChange;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onSelectedDidChange; // @synthesize onSelectedDidChange=_onSelectedDidChange;
@property(retain, nonatomic) MMFinderLiveFloatMsg *floatMsg; // @synthesize floatMsg=_floatMsg;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *trailingPAGPath; // @synthesize trailingPAGPath=_trailingPAGPath;
@property(retain, nonatomic) NSString *leadingImagePath; // @synthesize leadingImagePath=_leadingImagePath;
@property(retain, nonatomic) id payload; // @synthesize payload=_payload;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

