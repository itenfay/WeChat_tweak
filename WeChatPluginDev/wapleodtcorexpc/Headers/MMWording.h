//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMWording : NSObject
{
    _Bool _needshow;
    NSString *_entryTip;
    NSString *_title;
    NSString *_subTitle;
    NSString *_desc;
    NSString *_subDesc;
}

+ (id)WordingWithNeedshow:(_Bool)arg1 entryTip:(id)arg2 title:(id)arg3 subTitle:(id)arg4 desc:(id)arg5 subDesc:(id)arg6;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *subDesc; // @synthesize subDesc=_subDesc;
@property(readonly, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(readonly, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *entryTip; // @synthesize entryTip=_entryTip;
@property(readonly, nonatomic) _Bool needshow; // @synthesize needshow=_needshow;
- (id)description;
- (id)initWithNeedshow:(_Bool)arg1 entryTip:(id)arg2 title:(id)arg3 subTitle:(id)arg4 desc:(id)arg5 subDesc:(id)arg6;

@end

