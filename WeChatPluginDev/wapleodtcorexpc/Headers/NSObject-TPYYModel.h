//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface NSObject (TPYYModel)
+ (id)tp_modelWithDictionary:(id)arg1;
+ (id)tp_modelWithJSON:(id)arg1;
+ (id)_tp_dictionaryWithJSON:(id)arg1;
- (id)tp_modelDescription;
- (_Bool)tp_modelIsEqual:(id)arg1;
- (unsigned long long)tp_modelHash;
- (id)tp_modelInitWithCoder:(id)arg1;
- (void)tp_modelEncodeWithCoder:(id)arg1;
- (id)tp_modelCopy;
- (id)tp_modelToJSONString;
- (id)tp_modelToJSONData;
- (id)tp_modelToJSONObject;
- (_Bool)tp_modelSetWithDictionary:(id)arg1;
- (_Bool)tp_modelSetWithJSON:(id)arg1;
@end

