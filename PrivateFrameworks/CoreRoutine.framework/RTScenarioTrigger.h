/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTScenarioTrigger : NSObject <NSSecureCoding> {
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long type;

+ (id)scenarioTriggerTypeToString:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
