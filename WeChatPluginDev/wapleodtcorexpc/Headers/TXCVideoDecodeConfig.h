//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol TXLiteAVDecoderFactoryInterface;

@interface TXCVideoDecodeConfig : NSObject
{
    _Bool _isRealtime;
    int _strategy;
    id <TXLiteAVDecoderFactoryInterface> _decoderFactory;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TXLiteAVDecoderFactoryInterface> decoderFactory; // @synthesize decoderFactory=_decoderFactory;
@property(nonatomic) int strategy; // @synthesize strategy=_strategy;
@property(nonatomic) _Bool isRealtime; // @synthesize isRealtime=_isRealtime;
- (id)init;

@end

