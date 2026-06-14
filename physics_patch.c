// قوانين الفيزياء الخاصة بنظام أحمد أسامة - قانون الثقل الديناميكي
#define FRICTION_COEFFICIENT 0.8 // معامل الاحتكاك للعمليات الثقيلة
#define GRAVITY_CONSTANT 9.8     // ثابت الجاذبية لترتيب المهام

void apply_physics_to_process(int process_load) {
    if (process_load > 80) {
        // تطبيق قانون "الثقل": إذا زاد الحمل، نطبق احتكاكاً يقلل سرعة الاستجابة للحفاظ على توازن النظام
        float force = process_load * FRICTION_COEFFICIENT;
        // هذا الجزء سيتم ربطه لاحقاً بجدولة العمليات
    }
}
