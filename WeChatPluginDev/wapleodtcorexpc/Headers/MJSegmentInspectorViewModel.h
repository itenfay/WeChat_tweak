//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, UBBooleanSignal, UBDictionarySignal, UBEmptySignal;
@protocol OMCSegmentMeta;

@interface MJSegmentInspectorViewModel : NSObject
{
    id <OMCSegmentMeta> _segment;
    unsigned long long _type;
    UBDictionarySignal *_valueDidChangeSignal;
    UBBooleanSignal *_didFinishSignal;
    UBDictionarySignal *_didApplyToAllSignal;
    UBEmptySignal *_didResetSignal;
    NSArray *_adjustableProtocols;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *adjustableProtocols; // @synthesize adjustableProtocols=_adjustableProtocols;
@property(readonly, nonatomic) UBEmptySignal *didResetSignal; // @synthesize didResetSignal=_didResetSignal;
@property(readonly, nonatomic) UBDictionarySignal *didApplyToAllSignal; // @synthesize didApplyToAllSignal=_didApplyToAllSignal;
@property(readonly, nonatomic) UBBooleanSignal *didFinishSignal; // @synthesize didFinishSignal=_didFinishSignal;
@property(readonly, nonatomic) UBDictionarySignal *valueDidChangeSignal; // @synthesize valueDidChangeSignal=_valueDidChangeSignal;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) id <OMCSegmentMeta> segment; // @synthesize segment=_segment;
- (_Bool)hasChanges;
- (id)subTitle;
- (id)title;
- (_Bool)isResetEnabled;
- (_Bool)isApplyAllSwitchEnabled;
- (_Bool)isApplyAllEnabled;
- (_Bool)isCancelEnabled;
- (void)notifyDidReset;
- (void)notifyDidApplyToAll:(id)arg1;
- (void)notifyDidCancel;
- (void)notifyDidFinish;
- (void)notifyAdjustableValueDidChangeWithOptions:(unsigned long long)arg1;
- (void)notifyAdjustableValueDidChange;
- (void)setupSignals;
- (id)initWithSegment:(id)arg1 type:(unsigned long long)arg2;

@end

