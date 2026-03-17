//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface NSObject (QTCAutoCoding)
- (id)qtc_decodeObject;
- (id)qtc_encodeObject;
- (id)qtc_encodeNSValue;
- (id)qtc_decodeNSArray;
- (id)qtc_encodeNSArray;
@end

