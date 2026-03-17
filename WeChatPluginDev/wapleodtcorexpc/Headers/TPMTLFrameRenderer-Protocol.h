//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol TPMTLDrawable;

@protocol TPMTLFrameRenderer <NSObject>
@property(readonly) unsigned long long rendererType;
- (_Bool)render:(struct TPFrame *)arg1 destination:(id <TPMTLDrawable>)arg2;
@end

