//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardReaderWriter;

@interface FlutterStandardMessageCodec : NSObject
{
    FlutterStandardReaderWriter *_readerWriter;
}

+ (id)codecWithReaderWriter:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)decode:(id)arg1;
- (id)encode:(id)arg1;
- (id)initWithReaderWriter:(id)arg1;

@end

