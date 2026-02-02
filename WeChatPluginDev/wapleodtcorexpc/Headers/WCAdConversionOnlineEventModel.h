//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCAdConversionOnlineEventBizModel, WCAdConversionOnlineEventExtModel;

@interface WCAdConversionOnlineEventModel : NSObject
{
    int _seq;
    int _ei;
    int _vl;
    unsigned long long _ts;
    WCAdConversionOnlineEventExtModel *_ext;
    WCAdConversionOnlineEventBizModel *_biz;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdConversionOnlineEventBizModel *biz; // @synthesize biz=_biz;
@property(retain, nonatomic) WCAdConversionOnlineEventExtModel *ext; // @synthesize ext=_ext;
@property(nonatomic) int vl; // @synthesize vl=_vl;
@property(nonatomic) int ei; // @synthesize ei=_ei;
@property(nonatomic) unsigned long long ts; // @synthesize ts=_ts;
@property(nonatomic) int seq; // @synthesize seq=_seq;
- (id)init;

@end

