//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TXCCustomConvertFilter;

@interface TXCCustomProcessor
{
    TXCCustomConvertFilter *_convertFilter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TXCCustomConvertFilter *convertFilter; // @synthesize convertFilter=_convertFilter;
- (id)initWithContext:(id)arg1 delegate:(id)arg2 format:(unsigned long long)arg3 bufferType:(unsigned long long)arg4;

@end

