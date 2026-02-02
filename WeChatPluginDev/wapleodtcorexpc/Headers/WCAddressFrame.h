//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCAddressFrame : NSObject
{
    const char *m_symbolName;
    unsigned int _repeatCount;
    unsigned int _repeatCountInBackground;
    unsigned long long _address;
    NSMutableArray *_childAddressFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *childAddressFrame; // @synthesize childAddressFrame=_childAddressFrame;
@property(nonatomic) unsigned int repeatCountInBackground; // @synthesize repeatCountInBackground=_repeatCountInBackground;
@property(nonatomic) unsigned int repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) unsigned long long address; // @synthesize address=_address;
- (id)descriptionWithDeep:(int)arg1;
- (id)description;
- (id)tryFoundAddressFrameWithAddress:(unsigned long long)arg1;
- (void)symbolicate;
- (id)makeInfoDict;
- (id)getInfoDict;
- (void)addChildFrame:(id)arg1;
- (id)initWithAddress:(unsigned long long)arg1 withRepeatCount:(unsigned int)arg2 isInBackground:(_Bool)arg3;

@end

